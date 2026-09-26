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
extern int fn_82676C10();
extern int fn_8267A1C0();
extern int fn_8267AAC0();
extern unsigned int lbl_8200514C;


void fn_82676D78(undefined4 *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  
  *param_1 = &lbl_8200514C;
  if (param_1[10] != 0) {
    uVar1 = (ulonglong)(uint)param_1[7];
    if (uVar1 == 0) {
      fn_8267A1C0(param_1 + 10);
    }
    else {
      RtlEnterCriticalSection(uVar1 + 0x2204);
      fn_82676C10(uVar1 + 0x21f8,param_1 + 10);
      RtlLeaveCriticalSection(uVar1 + 0x2204);
    }
  }
  if ((ulonglong)(uint)param_1[7] != 0) {
    lVar2 = (ulonglong)(uint)param_1[7] + 0x15c;
    RtlEnterCriticalSection(lVar2);
    if (param_1[3] != 0) {
      *(undefined4 *)(param_1[2] + 4) = param_1[3];
      *(undefined4 *)param_1[3] = param_1[2];
      param_1[2] = 0;
      param_1[3] = 0;
    }
    RtlLeaveCriticalSection(lVar2);
  }
  fn_8267AAC0(param_1);
  return;
}

