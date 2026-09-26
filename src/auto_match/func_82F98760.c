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
extern unsigned int iStack_3c;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


undefined8 fn_82F98760(int param_1,int *param_2,int *param_3,undefined4 *param_4,uint *param_5)

{
  char cVar2;
  int iVar1;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  int iStack_3c;
  
  *(undefined4 **)(param_1 + 4) = param_4;
  puVar3 = (undefined4 *)(param_1 + 4);
  lVar6 = 5;
  do {
    param_4 = param_4 + 1;
    puVar3 = puVar3 + 1;
    *puVar3 = *param_4;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  *(undefined1 *)(param_1 + 0x3e) = 0;
  uVar4 = 0;
  for (uVar5 = param_5[1] >> 0xe; uVar5 != 0; uVar5 = uVar5 - 1 & uVar5) {
    uVar4 = uVar4 + 1;
  }
  *(uint *)(param_1 + 0x20) = uVar4 & 0xff;
  cVar2 = (**(code **)(*param_3 + 4))(param_3);
  *(char *)(param_1 + 0x40) = cVar2;
  if ((((param_5[1] & 0x20000) != 0) && (*(char *)(param_1 + 0x19) == '\0')) &&
     (*(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1, cVar2 != '\0')) {
    *(undefined1 *)(param_1 + 0x3e) = 1;
  }
  iStack_3c = (int)(longlong)((float)*param_5 * *(float *)(param_1 + 8));
  *(int *)(param_1 + 0x28) = iStack_3c;
  if (((longlong)iStack_3c * (longlong)*(int *)(param_1 + 0x20) & 0x3fffffffU) != 0) {
    iVar1 = (**(code **)(*param_2 + 4))(param_2);
    *(int *)(param_1 + 0x1c) = iVar1;
    if (iVar1 == 0) {
      return 0x34;
    }
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 0x3c) = 1;
  *(undefined1 *)(param_1 + 0x3d) = 0;
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0x18) == '\0') {
    *(undefined4 *)(param_1 + 0xc) = lbl_821AAD20;
  }
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0xc);
  if (*(char *)(param_1 + 0x40) == '\0') {
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x10);
  }
  else {
    *(undefined4 *)(param_1 + 0x34) = lbl_82002AE0;
  }
  return 1;
}

