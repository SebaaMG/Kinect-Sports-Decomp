typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
extern int fn_8267C498();
extern int fn_8269CEE0();
extern int fn_826FD490();


void fn_826FE670(longlong param_1,int *param_2)

{
  char cVar1;
  int *apiStack_30 [12];
  
  fn_8269CEE0(apiStack_30,param_1 + 0xad8);
  if (apiStack_30[0] != (int *)0x0) {
    apiStack_30[0][1] = apiStack_30[0][1] + 1;
    fn_8267C498(apiStack_30[0]);
  }
  if (apiStack_30[0] != param_2) {
    if (((apiStack_30[0] != (int *)0x0) && (apiStack_30[0][8] != 0)) &&
       (cVar1 = (**(code **)(*apiStack_30[0] + 0xd0))(apiStack_30[0],param_2,2), cVar1 == '\0'))
    goto LAB_826fe724;
    fn_826FD490(param_1,param_2,2);
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 0xcc))(param_2);
    }
  }
  if (apiStack_30[0] == (int *)0x0) {
    return;
  }
LAB_826fe724:
  fn_8267C498(apiStack_30[0]);
  return;
}

