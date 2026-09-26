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
extern int fn_827747B0();
extern int fn_82776E60();
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_831568D4;


undefined8 fn_82776F00(double param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  char cVar3;
  undefined8 uVar2;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  double dVar10;
  
  fn_82776E60(param_2,*(undefined4 *)(*param_4 + 0xc));
  if ((((param_3 == 0) || (*(int *)(param_3 + 0xc) != param_2)) ||
      (iVar1 = *(int *)(param_3 + 8), iVar1 == 0)) || (*(char *)(iVar1 + 0x25) != '\0')) {
LAB_8277705c:
    uVar2 = 0;
  }
  else {
    bVar9 = param_1 != (double)lbl_821AAD20;
    uVar7 = 0;
    if (*(int *)(iVar1 + 0x14) != 0) {
      iVar8 = 0;
      dVar10 = (double)lbl_82002C5C;
      do {
        iVar4 = *(int *)(iVar1 + 0x10) + iVar8;
        if (((bVar9) && (*(int *)(iVar4 + 0xc) != 0)) && (*(byte *)(iVar4 + 6) != 0)) {
          uVar5 = (longlong)((double)*(ushort *)(iVar4 + 0x10) * param_1 + dVar10) & 0xffffffff;
          uVar5 = ((uVar5 + 3 & 0xffffffff) >> 2) + uVar5;
          if ((uVar5 & 0xffffffff) < 0x100) {
            uVar6 = *(uint *)(&lbl_831568D4 + (uint)*(byte *)((int)uVar5 + param_2 + 0x7e0) * 4);
          }
          else {
            uVar6 = 0xff;
          }
          if (uVar6 != *(byte *)(iVar4 + 6)) goto LAB_8277705c;
        }
        if ((*(int *)(iVar4 + 0xc) != 0) &&
           (cVar3 = fn_827747B0(param_2 + 0x40), cVar3 == '\0')) goto LAB_8277705c;
        uVar7 = uVar7 + 1;
        iVar8 = iVar8 + 0x1c;
      } while (uVar7 < *(uint *)(iVar1 + 0x14));
    }
    uVar2 = 1;
  }
  return uVar2;
}

