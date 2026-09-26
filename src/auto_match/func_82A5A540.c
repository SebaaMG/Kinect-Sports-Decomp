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
extern int fn_82A1E0C0();
extern int fn_82A1E2C0();
extern int fn_82A1E338();
extern int fn_82A1E508();
extern int fn_82A4AE20();


ulonglong fn_82A5A540(int param_1,int param_2,undefined8 param_3,int param_4,undefined8 param_5,
                       undefined8 param_6)

{
  ulonglong uVar1;
  char cVar2;
  ulonglong uVar3;
  
  RtlEnterCriticalSection(param_1 + 0x24);
  uVar3 = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 4) = 0;
  uVar1 = fn_82A1E0C0(0,param_6,0xffffffff82a59d40,param_1,4,0);
  *(int *)(param_1 + 0xc) = (int)uVar1;
  if ((uVar1 & 0xffffffff) == 0) {
    uVar3 = thunk_FUN_82a2b798();
    if (0 < (int)uVar3) {
      uVar3 = uVar3 & 0xffff | 0x80070000;
    }
  }
  else {
    if (param_4 == 1) {
      cVar2 = '\0';
    }
    else if (param_4 == 2) {
      cVar2 = '\x01';
    }
    else if (param_4 == 4) {
      cVar2 = '\x02';
    }
    else if (param_4 == 8) {
      cVar2 = '\x03';
    }
    else {
      cVar2 = (param_4 != 0x10) + '\x04';
    }
    fn_82A1E508(uVar1,cVar2);
    fn_82A1E338(*(undefined4 *)(param_1 + 0xc),param_3);
    fn_82A1E2C0(*(undefined4 *)(param_1 + 0xc));
    KeWaitForSingleObject(*(undefined4 *)(param_1 + 0x14),3,1,0,0);
    if (param_2 == 0) {
      fn_82A4AE20(param_1);
    }
  }
  RtlLeaveCriticalSection(param_1 + 0x24);
  return uVar3;
}

