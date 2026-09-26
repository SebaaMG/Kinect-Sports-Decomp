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
extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern unsigned int *auStack_48;
extern unsigned int *auStack_50;
extern int fn_822315A0();
extern int fn_822E5F48();
extern unsigned int iStack_2c;
extern unsigned int iStack_34;
extern unsigned int iStack_3c;
extern unsigned int iStack_44;
extern unsigned int iStack_4c;
extern unsigned int lbl_821CC160;


undefined8 fn_822F0780(int param_1)

{
  float fVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  bool bVar5;
  double dVar6;
  undefined1 auStack_50 [4];
  int iStack_4c;
  undefined1 auStack_48 [4];
  int iStack_44;
  undefined1 auStack_40 [4];
  int iStack_3c;
  undefined1 auStack_38 [4];
  int iStack_34;
  undefined1 auStack_30 [4];
  int iStack_2c;
  
  if (*(int *)(*(int *)(param_1 + 0x10) + 0x178) == 2) {
    uVar3 = 0xffffffff821ae41c;
  }
  else {
    piVar4 = (int *)fn_822E5F48(auStack_50,*(undefined4 *)(param_1 + 0xc));
    iVar2 = *(int *)(*piVar4 + 0xc);
    if (iStack_4c != 0) {
      fn_822315A0(iStack_4c);
    }
    if (iVar2 == 0) {
      piVar4 = (int *)fn_822E5F48(auStack_38,*(undefined4 *)(param_1 + 0xc));
      dVar6 = (double)lbl_821CC160;
      bVar5 = (double)*(float *)(*piVar4 + 8) <= dVar6;
      if (iStack_34 != 0) {
        fn_822315A0();
      }
      if (bVar5) {
        piVar4 = (int *)fn_822E5F48(auStack_30,*(undefined4 *)(param_1 + 0xc));
        fVar1 = *(float *)(*piVar4 + 8);
        if (iStack_2c != 0) {
          fn_822315A0();
        }
        if (dVar6 <= (double)fVar1) {
          uVar3 = 0xffffffff821ae4ac;
        }
        else {
          uVar3 = 0xffffffff821ae494;
        }
      }
      else {
        uVar3 = 0xffffffff821ae47c;
      }
    }
    else {
      piVar4 = (int *)fn_822E5F48(auStack_48,*(undefined4 *)(param_1 + 0xc));
      dVar6 = (double)lbl_821CC160;
      bVar5 = (double)*(float *)(*piVar4 + 8) <= dVar6;
      if (iStack_44 != 0) {
        fn_822315A0();
      }
      if (bVar5) {
        piVar4 = (int *)fn_822E5F48(auStack_40,*(undefined4 *)(param_1 + 0xc));
        fVar1 = *(float *)(*piVar4 + 8);
        if (iStack_3c != 0) {
          fn_822315A0();
        }
        if (dVar6 <= (double)fVar1) {
          uVar3 = 0xffffffff821ae464;
        }
        else {
          uVar3 = 0xffffffff821ae44c;
        }
      }
      else {
        uVar3 = 0xffffffff821ae434;
      }
    }
  }
  return uVar3;
}

