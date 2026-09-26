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
extern int fn_82CEB8F0();
extern int fn_82CFD5B0();
extern int fn_82CFD5B8();
extern int fn_82CFD8C0();


undefined8 fn_82CEB548(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar3;
  undefined8 uVar2;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  
  iVar6 = *(int *)(param_1 + 0x20);
  if ((iVar6 == 0) || (iVar1 = *(int *)(param_2 * 4 + iVar6), iVar1 < 0)) {
    uVar2 = 1;
  }
  else {
    puVar5 = (undefined4 *)(iVar6 + iVar1);
    iVar6 = param_2 * 0x18 + *(int *)(param_1 + 0x18);
    if (*(char *)(iVar6 + 0xc) == '\x14') {
      uVar3 = fn_82CFD5B0(iVar6);
      uVar4 = *puVar5;
      param_3[5] = uVar3;
      uVar2 = 0;
      *param_3 = 0x14;
      param_3[4] = uVar4;
    }
    else if (*(char *)(iVar6 + 0xc) == '\x18') {
      uVar4 = fn_82CFD5B8(iVar6);
      uVar3 = fn_82CFD8C0(iVar6,puVar5);
      param_3[4] = uVar3;
      uVar2 = 0;
      param_3[5] = uVar4;
      *param_3 = 0x18;
    }
    else {
      uVar2 = fn_82CEB8F0(param_3,puVar5);
    }
  }
  return uVar2;
}

