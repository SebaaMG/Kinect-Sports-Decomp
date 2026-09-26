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
extern unsigned int *auStack_48;
extern int fn_822315A0();
extern int fn_82522588();
extern int fn_82570840();
extern int iRam831cb3c4;
extern unsigned int iStack_44;
extern unsigned int iStack_4c;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_50;


void fn_82370AA8(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  undefined4 uVar4;
  bool bVar5;
  ulonglong uVar6;
  double dVar7;
  undefined4 uStack_50;
  int iStack_4c;
  undefined1 auStack_48 [4];
  int iStack_44;
  
  uVar6 = (ulonglong)*(uint *)(param_1 + 0x30);
  bVar5 = false;
  uStack_50 = 0;
  if (uVar6 != *(uint *)(param_1 + 0x34)) {
    dVar7 = (double)lbl_821CC160;
    do {
      if (*(int *)(param_2 + 0x24) == 0) {
LAB_82370b1c:
        bVar2 = false;
      }
      else {
        iVar1 = *(int *)(param_2 + 0x2c);
        bVar5 = true;
        piVar3 = (int *)fn_82522588(&uStack_50,uVar6);
        bVar2 = true;
        if (iVar1 != *(int *)(*piVar3 + 0x254)) goto LAB_82370b1c;
      }
      if (bVar5) {
        bVar5 = false;
        if (iStack_4c != 0) {
          fn_822315A0();
        }
      }
      if (bVar2) {
        piVar3 = (int *)fn_82522588(auStack_48,uVar6);
        iVar1 = *piVar3;
        if ((iRam831cb3c4 != 0) && (*(int *)(iVar1 + 0x2d0) != 0)) {
          uVar4 = fn_82570840(*(undefined4 *)(iVar1 + 0x2c4),iVar1 + 0x2d0,0,iVar1 + 0x20);
          *(float *)(iVar1 + 0x2ac) = (float)dVar7;
          *(undefined4 *)(iVar1 + 0x2e0) = uVar4;
        }
        if (iStack_44 != 0) {
          fn_822315A0();
        }
      }
      uVar6 = uVar6 + 8;
    } while ((uVar6 & 0xffffffff) != (ulonglong)*(uint *)(param_1 + 0x34));
  }
  return;
}

