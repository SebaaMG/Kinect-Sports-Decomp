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
extern unsigned int *auStack_28;
extern int iRam83219d0c;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


ulonglong fn_82A2CF08(int param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4)

{
  undefined4 uVar1;
  ulonglong uVar2;
  uint uStack_30;
  uint uStack_2c;
  undefined8 auStack_28 [5];
  
  uVar1 = *(undefined4 *)(param_1 + 0x2c);
  iRam83219d0c = iRam83219d0c + 1;
  auStack_28[0] = param_4;
  uVar2 = NtWriteFile(*(undefined4 *)(param_1 + 0x28),uVar1,0,0,&uStack_30,param_2,param_3,
                      auStack_28);
  if ((int)uVar2 == 0x103) {
    NtWaitForSingleObjectEx(uVar1,0,0,0);
    uVar2 = (ulonglong)uStack_30;
  }
  if ((-1 < (int)uVar2) && ((param_3 & 0xffffffff) != (ulonglong)uStack_2c)) {
    uVar2 = 0xffffffffc0000185;
  }
  return uVar2;
}

