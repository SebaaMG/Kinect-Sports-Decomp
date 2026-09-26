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
extern int fn_82FF0BA8();
extern int fn_82FF0D20();
extern int fn_82FF0E18();
extern unsigned int lbl_83264574;


undefined8
fn_82FF2BE0(int param_1,int param_2,int param_3,int param_4,undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  
  RtlEnterCriticalSection(0xffffffff83264580);
  for (iVar1 = lbl_83264574; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x10)) {
    if (((*(int *)(iVar1 + 0x68) == param_2) &&
        ((param_3 == 0 || (*(int *)(iVar1 + 0x70) == param_3)))) &&
       ((param_4 == 0 || (*(int *)(iVar1 + 0x50) == param_4)))) {
      if (param_1 == 3) {
        fn_82FF0BA8(iVar1,param_5);
      }
      else if (param_1 == 4) {
        fn_82FF0D20(iVar1,param_5);
      }
      else if (param_1 == 5) {
        fn_82FF0E18(iVar1,param_5,param_6);
      }
    }
  }
  RtlLeaveCriticalSection(0xffffffff83264580);
  return 1;
}

