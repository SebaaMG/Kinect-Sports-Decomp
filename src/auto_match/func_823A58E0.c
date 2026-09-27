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
extern int fn_82396230();
extern int fn_82396BE0();
extern int fn_82398668();
extern int fn_823987C8();
extern int fn_82399C38();
extern float lbl_8218E8FC;
extern unsigned int lbl_82192504;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


void fn_823A58E0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 8) + 8);
  *(uint *)(iVar1 + 0x260) = *(uint *)(iVar1 + 0x260) | 0x20;
  fn_823987C8(*(undefined4 *)(*(int *)(param_1 + 8) + 8));
  fn_82398668(*(undefined4 *)(*(int *)(param_1 + 8) + 8));
  iVar1 = fn_82399C38(*(undefined4 *)(*(int *)(param_1 + 8) + 8));
  if (iVar1 != 0) {
    fn_82396BE0(*(undefined4 *)(*(int *)(param_1 + 8) + 8));
  }
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  iVar1 = *(int *)(*(int *)(param_1 + 8) + 8);
  *(float *)(*(int *)(*(int *)(param_1 + 8) + 8) + 0x868) =
       ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) * lbl_8218E8FC + lbl_82192504;
  if (*(int *)(iVar1 + 0x178) == 0) {
    *(undefined4 *)(iVar1 + 0x240) = 1;
    fn_82396230();
  }
  return;
}

