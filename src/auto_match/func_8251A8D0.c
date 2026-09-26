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
extern int fn_822315A0();
extern int fn_82517A50();
extern int fn_828ACC40();
extern int fn_828AE130();
extern int fn_828B62F0();
extern int fn_828B6300();
extern int fn_828B6318();
extern int fn_828B6380();
extern int fn_828B6458();
extern int fn_828B6720();
extern int fn_828B6758();
extern int fn_828B7DC0();
extern int fn_828B8F50();
extern int fn_828C3D70();
extern int fn_828C40D8();
extern int fn_828C4360();
extern int fn_828EA820();
extern unsigned int lbl_83265988;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;


void fn_8251A8D0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  bool bVar4;
  char cVar7;
  int iVar6;
  undefined8 uVar5;
  undefined1 auStack_50 [4];
  undefined4 uStack_4c;
  undefined8 uStack_48;
  
  if ((*(int *)(param_1 + 0x58) == *(int *)(param_1 + 0x50)) && (*(char *)(param_1 + 0x5c) != '\0'))
  {
    fn_828C40D8(*(undefined4 *)(*(int *)(param_1 + 4) + 8));
    iVar1 = *(int *)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
    if (iVar1 == 0) {
      return;
    }
    fn_822315A0();
    return;
  }
  cVar7 = fn_828ACC40(*(undefined4 *)(*(int *)(param_1 + 4) + 8));
  iVar1 = lbl_83265988;
  if (cVar7 == '\0') {
    return;
  }
  if (lbl_83265988 == 0) {
    if (*(int *)(param_1 + 0x50) == 2) {
      return;
    }
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x54) = 2;
    return;
  }
  if (*(int *)(param_1 + 0x10) != 0) goto LAB_8251aa28;
  fn_828C3D70(auStack_50,*(undefined4 *)(*(int *)(param_1 + 4) + 8));
  cVar7 = fn_828B62F0(auStack_50);
  if (cVar7 == '\0') {
LAB_8251a9cc:
    bVar4 = false;
  }
  else {
    fn_828C4360(auStack_50);
    cVar7 = fn_828B6458();
    if (cVar7 == '\0') goto LAB_8251a9cc;
    fn_828C4360(auStack_50);
    iVar6 = fn_828B6720();
    bVar4 = true;
    if (iVar6 == 0) goto LAB_8251a9cc;
  }
  if (!bVar4) {
    *(undefined4 *)(param_1 + 0x54) = 4;
    fn_828B6380(auStack_50);
    return;
  }
  fn_828B6300();
  fn_828B6318(auStack_50);
  uVar5 = fn_828C4360(auStack_50);
  fn_828B6758(&uStack_4c,uVar5);
  fn_82517A50(param_1 + 0x44,uStack_4c);
  uVar5 = fn_828C4360(auStack_50);
  fn_828B7DC0(&uStack_48,uVar5,&uStack_4c);
  fn_828B6380(auStack_50);
LAB_8251aa28:
  uStack_48 = *(undefined8 *)(*(int *)(param_1 + 4) + 0x10);
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 4) + 8);
  fn_828B8F50(*(undefined4 *)(param_1 + 0x44));
  uVar3 = *(uint *)(param_1 + 0x4c);
  uVar5 = fn_828EA820(iVar1);
  fn_828AE130(uVar2,param_1 + 0x44,uVar5,1,(ulonglong)uVar3 + 1,0,(((U64)(uStack_48) >> 0) & 0xFF),
                  (((U64)(uStack_48) >> 8) & 0xFF));
  return;
}

