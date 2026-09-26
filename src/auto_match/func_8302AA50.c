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
extern int fn_83016920();
extern int fn_83016AB8();
extern int fn_83016B68();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


longlong fn_8302AA50(int param_1,uint param_2,undefined8 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  undefined4 *puVar5;
  double dVar6;
  
  fVar3 = lbl_821AAD20;
  fVar2 = lbl_82002AE0;
  lVar4 = 0;
  if (*(float *)(param_1 + 0x1c) != lbl_821AAD20) {
    fVar1 = ((float)param_2 - *(float *)(param_1 + 0x18)) / *(float *)(param_1 + 0x1c);
    *(float *)(param_1 + 0x20) = fVar1;
    if (fVar1 < fVar2) {
      if (fVar1 < fVar3) {
        *(float *)(param_1 + 0x20) = fVar3;
      }
      goto LAB_8302aac4;
    }
  }
  lVar4 = 1;
LAB_8302aac4:
  if (lVar4 == 1) {
    dVar6 = (double)*(float *)(param_1 + 0xc);
    if ((*(byte *)(param_1 + 0x38) & 0x80) == 0x80) {
      dVar6 = (double)fn_83016AB8(dVar6,0xffffffff83264368);
    }
  }
  else if ((*(byte *)(param_1 + 0x38) & 0x80) == 0) {
    dVar6 = (double)fn_83016920((double)*(float *)(param_1 + 0x20),
                                      (double)*(float *)(param_1 + 8),
                                      (double)*(float *)(param_1 + 0xc),0xffffffff83264368);
  }
  else {
    dVar6 = (double)fn_83016B68();
  }
  *(float *)(param_1 + 0x10) = (float)dVar6;
  puVar5 = *(undefined4 **)(param_1 + 0x28);
  *(byte *)(param_1 + 0x38) = *(byte *)(param_1 + 0x38) | 0x40;
  if (puVar5 != *(undefined4 **)(param_1 + 0x2c)) {
    do {
      (*(code *)**(undefined4 **)*puVar5)
                (dVar6,(undefined4 *)*puVar5,*(undefined4 *)(param_1 + 0x14),param_3,lVar4);
      puVar5 = puVar5 + 1;
    } while (puVar5 != *(undefined4 **)(param_1 + 0x2c));
  }
  return lVar4;
}

