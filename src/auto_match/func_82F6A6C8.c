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
extern unsigned int *auStack_50;
extern int fn_82A1E0C0();
extern int fn_82D7E470();
extern int fn_82F63BA0();
extern int fn_82F641F8();
extern int fn_82F68240();
extern int fn_82F682B0();
extern int fn_82F6E1C8();
extern int fn_82F6F940();


ulonglong fn_82F6A6C8(undefined8 param_1,undefined8 param_2,int param_3,undefined4 param_4,
                       undefined8 param_5,undefined1 *param_6)

{
  undefined4 *puVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 auStack_50 [80];
  
  uVar3 = 0;
  if (param_3 == 0) {
    puVar1 = (undefined4 *)fn_82F68240();
    *puVar1 = 0x16;
    fn_82F63BA0();
  }
  else {
    fn_82D7E470();
    iVar2 = fn_82F6E1C8(1,0xc4);
    if (iVar2 != 0) {
      fn_82F6F940(iVar2,0);
      *(int *)(iVar2 + 0x54) = param_3;
      *(undefined4 *)(iVar2 + 0x58) = param_4;
      *(undefined4 *)(iVar2 + 4) = 0xffffffff;
      if (param_6 == (undefined1 *)0x0) {
        param_6 = auStack_50;
      }
      uVar3 = fn_82A1E0C0(param_1,param_2,0xffffffff82f6a638,iVar2,param_5,param_6);
      if ((uVar3 & 0xffffffff) != 0) {
        return uVar3;
      }
      uVar3 = thunk_FUN_82a2b798();
    }
    fn_82F641F8(iVar2);
    if ((uVar3 & 0xffffffff) != 0) {
      fn_82F682B0(uVar3);
    }
  }
  return 0;
}

