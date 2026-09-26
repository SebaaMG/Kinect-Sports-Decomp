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
extern int fn_8223A630();
extern int fn_8223A748();
extern int fn_8223B688();
extern int fn_825145D0();
extern int fn_82F68CC0();
extern unsigned int lbl_83297820;


undefined4 * fn_822381A8(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  
  param_1[4] = param_2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = *param_3;
  param_1[6] = param_3[1];
  fn_82F68CC0(param_1 + 7,param_3 + 2,8);
  fn_8223B688(param_1 + 9,param_3 + 4);
  iVar2 = lbl_83297820;
  bVar1 = lbl_83297820 == 0;
  param_1[0x10] = param_3[0xb];
  param_1[0x11] = param_3[0xc];
  if (bVar1) {
    iVar2 = fn_825145D0();
  }
  iVar6 = iVar2 + 4;
  iVar3 = 0;
  bVar5 = 1;
  iVar4 = iVar6;
  if (*(int *)(iVar2 + 4) != 0) {
    iVar2 = *(int *)(iVar2 + 4);
    do {
      iVar4 = iVar2;
      bVar5 = -((uint)param_1[4] < *(uint *)(iVar4 + 0x10)) & 1;
      if (bVar5 == 0) {
        iVar2 = *(int *)(iVar4 + 8);
        iVar3 = iVar4;
      }
      else {
        iVar2 = *(int *)(iVar4 + 4);
      }
    } while (iVar2 != 0);
    if ((iVar3 != 0) && ((uint)param_1[4] <= *(uint *)(iVar3 + 0x10))) {
      bVar1 = false;
      bVar5 = 0;
      iVar4 = 0;
      goto LAB_822382a8;
    }
  }
  bVar1 = true;
LAB_822382a8:
  if (bVar1) {
    fn_8223A748(iVar6,param_1,iVar4,bVar5);
    fn_8223A630(iVar6,param_1);
  }
  return param_1;
}

