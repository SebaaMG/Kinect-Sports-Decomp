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
extern int fn_82547F50();
extern int fn_82631578();
extern int fn_82631920();
extern int iRam832700d8;
extern unsigned int uRam832700d0;
extern unsigned int uRam832700d4;
extern unsigned int uRam8327f904;
extern unsigned int uRam8327f908;
extern unsigned int uRam8327f984;
extern unsigned int uRam8327f988;


void fn_825D4F08(undefined8 param_1,ulonglong param_2,ulonglong param_3,int param_4)

{
  if ((ulonglong)uRam832700d4 != (param_2 & 0xffffffff)) {
    fn_82547F50(param_2,0,param_1);
    uRam832700d4 = (uint)param_2;
  }
  if (((param_3 & 0xffffffff) != 0) && ((ulonglong)uRam832700d0 != (param_3 & 0xffffffff))) {
    fn_82547F50(param_3,2,param_1);
    uRam832700d0 = (uint)param_3;
  }
  if (param_4 == 0) {
    if (iRam832700d8 != 1) {
      fn_82631920(param_1,uRam8327f904);
                    /* WARNING: Subroutine does not return */
      fn_82631578(param_1,uRam8327f984);
    }
  }
  else if (iRam832700d8 != 2) {
    fn_82631920(param_1,uRam8327f908);
                    /* WARNING: Subroutine does not return */
    fn_82631578(param_1,uRam8327f988);
  }
  return;
}

