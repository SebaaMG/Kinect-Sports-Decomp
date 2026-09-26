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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
#define _uStack_30 ((*(U64*)&uStack_30))
extern int fn_822315A0();
extern int fn_8232B908();
extern int fn_8232BEE0();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_8265C9E0();
extern unsigned int iStack_2c;
extern unsigned int lbl_821AD588;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;
extern unsigned int uStack_30;


void fn_822C11F8(int param_1,int *param_2)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 uStack_30;
  int iStack_2c;
  
  iVar3 = 0;
  for (piVar4 = (int *)*param_2; (piVar4 != (int *)0x0 && (*piVar4 != 0));
      piVar4 = (int *)(-(uint)(piVar4[1] != 0) & (uint)(piVar4 + 1))) {
    iVar3 = iVar3 + 1;
  }
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  iVar3 = (int)((float)(longlong)iVar3 *
               ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460));
  _uStack_30 = CONCAT44(*(undefined4 *)(iVar3 * 4 + *param_2),iVar3);
  uVar1 = fn_8251F720(&uStack_30,0);
  puVar2 = (undefined4 *)fn_8265C9E0(0xa8);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = 1;
    *puVar2 = &lbl_821AD588;
    puVar2[2] = 1;
    if (puVar2 + 3 != (undefined4 *)0x0) {
      fn_8232BEE0(puVar2 + 3,param_1,uVar1);
    }
  }
  iVar3 = *(int *)(param_1 + 0x5ac);
  *(undefined4 **)(param_1 + 0x5ac) = puVar2;
  *(undefined4 **)(param_1 + 0x5a8) = puVar2 + 3;
  if (iVar3 != 0) {
    fn_822315A0();
  }
  if (*(int *)(param_1 + 0x27c) != 0) {
    fn_8232B908(*(undefined4 *)(param_1 + 0x5a8));
  }
  if ((uVar1 & 0xffffffff) != 0) {
    fn_8251FA58(uVar1);
  }
  return;
}

