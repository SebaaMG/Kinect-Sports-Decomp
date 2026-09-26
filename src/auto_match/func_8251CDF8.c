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
#define ZEXT48(x) ((U64)((U32)(x)))
extern int fn_822314E8();
extern int fn_82231540();
extern int fn_8251CC50();
extern int fn_8251DC28();
extern int fn_825269D0();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern unsigned int lbl_832960A0;
extern unsigned int lbl_832960B8;
extern unsigned int lbl_832960C0;
extern unsigned int *lbl_83296188;
extern unsigned int uRam832960bc;


undefined8 fn_8251CDF8(ulonglong param_1,int *param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  int *piVar4;
  
  if ((param_1 & 0xffffffff) != 0) {
    fn_825269D0(0xf,param_1);
  }
  if (*param_2 != 0) {
    uRam832960bc = 0;
    lbl_832960B8 = lbl_832960B8 + 1;
    lbl_832960C0 = 0;
  }
  if (lbl_832960A0 != 0) {
    fn_8251CC50(1,1);
  }
  lbl_832960A0 = *param_2;
  fn_825269D0(0x10,0);
  iVar1 = fn_8265C9E0(0x30);
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)fn_8251DC28();
  }
  uVar3 = ZEXT48(lbl_83296188);
  lbl_83296188 = puVar2;
  if (uVar3 != 0) {
    fn_822314E8(uVar3 + 0x20);
    fn_8265CA20(uVar3);
  }
  *lbl_83296188 = (int)param_1;
  lbl_83296188[1] = 0;
  lbl_83296188[2] = 0;
  lbl_83296188[3] = 0;
  lbl_83296188[4] = param_3;
  puVar2 = lbl_83296188;
  piVar4 = lbl_83296188 + 8;
  if (lbl_83296188 + 8 != param_4) {
    if (*piVar4 != 0) {
      fn_82231540(*piVar4,lbl_83296188[9]);
      fn_8265CA20(*piVar4);
    }
    *piVar4 = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    *piVar4 = *param_4;
    puVar2[9] = param_4[1];
    puVar2[10] = param_4[2];
    *param_4 = 0;
    param_4[1] = 0;
    param_4[2] = 0;
  }
  lbl_83296188[7] = 1;
  lbl_83296188[6] = 1;
  fn_822314E8(param_4);
  return 1;
}

