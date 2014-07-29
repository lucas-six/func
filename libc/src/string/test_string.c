/**
 * Test <string.h>
 *
 *
 * Copyright 2014 Li Yun <leven.cn@gmail.com>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "func_string.h"
#include <limits.h>
#include <string.h>
#include <assert.h>


int main()
{
    /* Test strlen() */
    assert(func_strlen("") == strlen(""));
    assert(func_strlen("string") == strlen("string"));
    
    /* Test strncat() */
    char dst_stdc[8] = "a";
    char dst_func[8] = "a";
    const char *src = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    size_t n = 8 - strlen(dst_stdc) - 1;
    assert(strcmp(strncat(dst_stdc,src,n), func_strncat(dst_func,src,n)) == 0);
    
    return 0;
}