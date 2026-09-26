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
extern unsigned int *auStack_30;
extern int fn_82F72F40();
extern int fn_82F73228();
extern int fn_82F73308();
extern int fn_82F739E8();
extern int fn_82F73BD8();
extern int fn_82F75998();
extern unsigned int *lbl_832635C0;
extern unsigned int lbl_832635D0;
extern unsigned int uStack_38;
extern unsigned int uStack_40;


ulonglong * fn_82F75AE8(ulonglong *param_1)

{
  char cVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  char *pcVar6;
  int iVar7;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [48];
  int iVar5;
  
  uVar4 = (~(ulonglong)lbl_832635D0 & 0xffffffff) >> 0xf & 1;
  iVar5 = (int)uVar4;
  if ((uVar4 == 0) || (iVar7 = 1, (lbl_832635D0 & 0x1000) != 0)) {
    iVar7 = 0;
  }
  uStack_40 = (ulonglong)(((U64)(uStack_40) >> 32) & 0xFFFFFFFF) & 0xffffffff0000ffff;
  pcVar6 = lbl_832635C0 + 1;
  cVar1 = *lbl_832635C0;
  if (cVar1 == '\0') {
    fn_82F72F40(param_1,0xffffffff82169ea9);
    return param_1;
  }
  lbl_832635C0 = pcVar6;
  if (cVar1 == 'T') {
    uVar3 = 0xffffffff82169eb8;
  }
  else if (cVar1 == 'U') {
    uVar3 = 0xffffffff82169ec0;
  }
  else if (cVar1 == 'V') {
    uVar3 = 0xffffffff82169ec8;
  }
  else {
    if (cVar1 == 'W') {
      uVar3 = fn_82F73BD8(&uStack_38);
      puVar2 = (ulonglong *)fn_82F739E8(auStack_30,0xffffffff82133c4c,uVar3);
      uStack_40 = *puVar2;
      goto LAB_82f75be8;
    }
    if (cVar1 == 'X') {
      uVar3 = 0xffffffff82169ed0;
    }
    else {
      iVar5 = iVar7;
      if (cVar1 != 'Y') goto LAB_82f75be8;
      uVar3 = 0xffffffff82169edc;
    }
  }
  fn_82F73308(&uStack_40,uVar3);
  iVar5 = iVar7;
LAB_82f75be8:
  uStack_38 = (ulonglong)(((U64)(uStack_38) >> 32) & 0xFFFFFFFF) & 0xffffffff0000ffff;
  if (iVar5 != 0) {
    uStack_38 = uStack_40;
  }
  fn_82F75998(&uStack_40);
  fn_82F73228(&uStack_38,&uStack_40);
  *param_1 = uStack_38;
  return param_1;
}

