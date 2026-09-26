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
extern int fn_82270180();
extern unsigned int lbl_8218E8FC;
extern unsigned int lbl_82192544;
extern unsigned int lbl_821955B8;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831D4F34;
extern unsigned int lbl_831E5BF0;
extern unsigned int lbl_8327F844;


void fn_82483488(undefined8 param_1,undefined8 param_2,char param_3)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  iVar5 = fn_82270180(param_2);
  if (iVar5 != 0) {
    iVar5 = *(int *)(iVar5 + 0x550);
    if (param_3 == '\0') {
      *(undefined4 *)(iVar5 + 0x1bc) = 0;
    }
    else if (*(int *)(iVar5 + 0x1bc) == 0) {
      *(undefined4 *)(iVar5 + 0x1bc) = 1;
      iVar5 = lbl_8327F844;
      if (lbl_8327F844 != 0) {
        *(undefined4 *)(lbl_8327F844 + 0xf0) = 1;
        uVar3 = lbl_821CC160;
        uVar2 = lbl_82192544;
        fVar1 = lbl_8218E8FC;
        dVar6 = (double)lbl_8218E8FC;
        *(undefined4 *)(iVar5 + 0xf4) = 0;
        uVar4 = lbl_831E5BF0;
        *(float *)(iVar5 + 0xf8) = fVar1;
        *(undefined4 *)(iVar5 + 0x108) = uVar2;
        *(undefined4 *)(iVar5 + 0xfc) = uVar3;
        *(undefined4 *)(iVar5 + 0x104) = uVar4;
        dVar7 = lbl_821955B8;
        dVar8 = (double)lbl_831D4F34;
        *(undefined4 *)(iVar5 + 0xf4) = 1;
        if ((float)(dVar8 - dVar6) < 0.0) {
          dVar7 = dVar8;
        }
        *(undefined4 *)(iVar5 + 0x100) = uVar3;
        *(float *)(iVar5 + 0x114) = (float)dVar7;
      }
    }
  }
  return;
}

