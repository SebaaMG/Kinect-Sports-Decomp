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
#define NAN(x) ((x) != (x))
extern int fn_8252AFE0();
extern int fn_8253E960();
extern int fn_82D85148();
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


void fn_8253FB70(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int *piVar6;
  
  iVar5 = *(int *)(param_1 + 0x7c0);
  piVar6 = (int *)(param_1 + 0x7c0);
  if (iVar5 != 0) {
    if ((*(int *)(param_1 + 0x828) != 0) && (*(int *)(param_1 + 0x82c) == 0)) {
      *(undefined4 *)(param_1 + 0x82c) = 1;
      *(undefined4 *)(param_1 + 0x830) = *(undefined4 *)(iVar5 + 0x2c);
      *(undefined4 *)(iVar5 + 0x2c) = 8;
      fn_82D85148(*(undefined4 *)(*piVar6 + 8),*piVar6,0,1);
    }
    if ((*(int *)(param_1 + 0x828) == 0) && (*(int *)(param_1 + 0x82c) != 0)) {
      *(undefined4 *)(param_1 + 0x82c) = 0;
      *(undefined4 *)(*piVar6 + 0x2c) = *(undefined4 *)(param_1 + 0x830);
      fn_82D85148(*(undefined4 *)(*piVar6 + 8),*piVar6,0,1);
    }
    fVar4 = lbl_821CC160;
    if ((*(int *)(param_1 + 0x82c) != 0) && (*(int *)(param_1 + 0x838) != 0)) {
      fVar1 = *(float *)(param_1 + 0x838) - *(float *)(param_1 + 0xb3c);
      fVar2 = -fVar1;
      fVar3 = lbl_821CC160;
      if (*(float *)(&lbl_821954D8 +
                    ((uint)(byte)((fVar2 < lbl_821CC160) << 2) |
                    (uint)(NAN(fVar2) || NAN(lbl_821CC160)) << 2)) < 0.0) {
        fVar3 = fVar1;
      }
      *(float *)(param_1 + 0x838) = fVar3;
      if (fVar3 == fVar4) {
        iVar5 = fn_8253E960(param_1,*piVar6,*(undefined4 *)(param_1 + 0x830));
        if (iVar5 == 0) {
          *(undefined4 *)(param_1 + 0x838) = lbl_821CA460;
        }
        else {
          *(undefined4 *)(*piVar6 + 0x2c) = *(undefined4 *)(param_1 + 0x830);
          fn_82D85148(*(undefined4 *)(*piVar6 + 8),*piVar6,0,1);
          fn_8252AFE0((double)*(float *)(param_1 + 0x834),param_1);
          *(undefined4 *)(param_1 + 0x82c) = 0;
          *(undefined4 *)(param_1 + 0x828) = 0;
        }
      }
    }
  }
  return;
}

