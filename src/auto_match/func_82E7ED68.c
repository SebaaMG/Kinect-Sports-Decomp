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
extern int fn_82E7EC68();
extern int fn_82E7ECB8();
extern unsigned int uStack_10;


undefined8 fn_82E7ED68(undefined8 param_1,ulonglong param_2,undefined4 *param_3)

{
  ushort uVar1;
  undefined8 uVar2;
  int iVar3;
  ushort *puVar4;
  uint uStack_10;
  int aiStack_c [3];
  
  uStack_10 = 0;
  aiStack_c[0] = 0;
  uVar2 = 0;
  if (param_3 == (undefined4 *)0x0) {
    return 0xffffffff80004003;
  }
  puVar4 = (ushort *)param_1;
  if ((*puVar4 & 0x1000) == 0) {
    if ((param_2 & 0xffffffff) == 0) {
      uVar1 = *puVar4 & 0xfff;
      if ((uVar1 == 0xc) || (uVar1 == 0x48)) {
        puVar4 = *(ushort **)(puVar4 + 4);
      }
      else {
        puVar4 = puVar4 + 4;
      }
LAB_82e7ee28:
      *param_3 = puVar4;
      return uVar2;
    }
  }
  else {
    uVar2 = fn_82E7EC68(param_1,&uStack_10);
    iVar3 = (int)param_2;
    if ((int)uVar2 < 0) {
      return uVar2;
    }
    if ((param_2 & 0xffffffff) < (ulonglong)uStack_10) {
      uVar2 = fn_82E7ECB8(param_1,aiStack_c);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      puVar4 = (ushort *)(aiStack_c[0] * iVar3 + *(int *)((int)param_1 + 0xc));
      goto LAB_82e7ee28;
    }
  }
  return 0xffffffff80070057;
}

