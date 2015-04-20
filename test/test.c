#include "CuTest.h"

#include "page_db.h"
#include "bf_scheduler.h"

int main(void) {
     CuString *output = CuStringNew();
     CuSuite *suite = CuSuiteNew();
     
     CuSuiteAddSuite(suite, test_page_db_suite());
     CuSuiteAddSuite(suite, test_bf_scheduler_suite());
     
     CuSuiteRun(suite);

     CuSuiteSummary(suite, output);
     CuSuiteDetails(suite, output);
     printf("%s\n", output->buffer);
     
     return 0;
}