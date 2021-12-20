#include <sqltypes.h>
#include <odbcinst.h>
#include <sqlext.h>
#include <cstdio>

void ODBC()
{
    RETCODE error;
    HENV env; /* environment */
    HDBC conn; /* database connection */

    SQLAllocEnv(&env);
    SQLAllocConnect(env, &conn);
    SQLConnect(conn, "localhost", SQL_NTS, "userid", SQL_NTS,
               "passwd", SQL_NTS);
    {
        char deptname[80];
        float salary;
        int lenOut1, lenOut2;
        HSTMT stmt;

        char * sqlquery = "";
        SQLAllocStmt(conn, &stmt);
        error = SQLExecDirect(stmt, sqlquery, SQL_NTS);
        if (error == SQL_SUCCESS) {
            SQLBindCol(stmt, 1, SQL_C_CHAR,  , 0, &lenOut1);
            SQLBindCol(stmt, 2, SQL_C_FLOAT, &, 0 , &lenOut2);
            while (SQLFetch(stmt) == SQL_SUCCESS) {
                printf ("%s, %g\n", deptname, salary);
            }
        }
        SQLFreeStmt(stmt, SQL_DROP);
    }
    SQLDisconnect(conn);
    SQLFreeConnect(conn);
    SQLFreeEnv(env);
}
