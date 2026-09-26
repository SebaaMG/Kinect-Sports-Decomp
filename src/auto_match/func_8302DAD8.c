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
extern int fn_82FAB9C0();
extern int fn_8302C7A8();
extern int fn_8302CB50();
extern int fn_8302CE08();
extern int fn_8302CF58();
extern int fn_8302D480();
extern int fn_8302D5C8();
extern unsigned int lbl_832642E0;


ulonglong fn_8302DAD8(int param_1,undefined8 param_2,undefined2 *param_3,undefined4 *param_4)

{
  bool bVar1;
  ulonglong uVar2;
  byte bVar5;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  byte abStack_80 [128];
  
  uVar10 = 0;
  *param_3 = 0;
  *param_4 = 0;
  uVar8 = 0;
  uVar2 = (**(code **)(**(int **)(param_1 + 0x88) + 0xc))();
  uVar4 = uVar8;
  if ((uVar2 & 0xffffffff) != 0) {
    if ((uVar2 & 0xffffffff) == 1) {
      uVar3 = (**(code **)(**(int **)(param_1 + 0x88) + 0x10))(*(int **)(param_1 + 0x88),0);
      *param_4 = (int)uVar3;
      uVar4 = fn_82FAB9C0((ulonglong)lbl_832642E0 + 4,uVar3);
    }
    else {
      uVar6 = 0;
      bVar1 = false;
      uVar7 = 0;
      uVar9 = 0;
      if ((*(byte *)(param_1 + 0x11f) & 0xe0) == 0x20) {
        uVar7 = fn_8302CE08(param_1,param_2);
        uVar4 = uVar7;
      }
      else {
        uVar9 = fn_8302CF58(param_1,uVar2 & 0xffff,param_2);
        uVar4 = uVar9;
      }
      if ((uVar4 & 0xffffffff) != 0) {
        do {
          abStack_80[0] = 1;
          if (bVar1) {
            uVar10 = (uVar10 & 0xffff) + 1 & 0xffff;
            uVar10 = -(ulonglong)(uVar10 < uVar2) & uVar10;
            bVar5 = fn_8302C7A8(param_1,uVar9,uVar10);
            if (bVar5 != 0) {
              fn_8302D480(param_1,uVar9,uVar10);
            }
          }
          else if ((*(byte *)(param_1 + 0x11f) & 0xe0) == 0x20) {
            uVar10 = fn_8302CB50(param_1,uVar7);
            bVar5 = abStack_80[0];
          }
          else {
            uVar10 = fn_8302D5C8(param_1,uVar9,abStack_80,0);
            bVar5 = abStack_80[0];
          }
          if (bVar5 == 0) {
            if (!bVar1) {
              return uVar8;
            }
          }
          else {
            uVar3 = (**(code **)(**(int **)(param_1 + 0x88) + 0x10))
                              (*(int **)(param_1 + 0x88),uVar10);
            *param_4 = (int)uVar3;
            uVar8 = fn_82FAB9C0((ulonglong)lbl_832642E0 + 4,uVar3);
            if ((uVar8 & 0xffffffff) != 0) {
              *param_3 = (short)uVar10;
              return uVar8;
            }
          }
          if ((((uVar6 & 0xffffffff) == 0) && ((*(byte *)(param_1 + 0x11f) & 0xe0) == 0)) &&
             ((*(byte *)(param_1 + 0x11e) & 0xc) != 4)) {
            bVar1 = true;
          }
          uVar6 = uVar6 + 1;
          uVar4 = uVar8;
        } while ((uVar6 & 0xffffffff) < (uVar2 & 0xffffffff));
      }
    }
  }
  return uVar4;
}

