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
extern int fn_825200A8();
extern int fn_82BFEB90();
extern int fn_82BFEC78();
extern int fn_82BFEE50();
extern unsigned int lbl_82195864;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_24;


undefined4 fn_82555040(undefined4 *param_1,ulonglong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_30 [12];
  uint uStack_24;
  
  fn_82BFEB90(param_1[6],param_1 + 7);
  *param_1 = 1;
  if (param_1[6] != 0) {
    fn_82BFEE50(param_1[6],1,param_1[0xb],param_1[0xc]);
  }
  if (param_1[6] != 0) {
    fn_82BFEE50(param_1[6],2,param_1[0xd],param_1[0xe]);
  }
  fn_82BFEC78(param_1[6],auStack_30);
  dVar4 = (double)lbl_821CC160;
  if ((param_2 & 0xffffffff) != 0) {
    lVar2 = 5;
    lVar3 = -0x7cd692a0;
    dVar5 = dVar4;
    do {
      iVar1 = fn_825200A8(lVar3 + -4,param_2);
      if (iVar1 != 0) {
        dVar4 = (double)*(float *)lVar3;
      }
      lVar2 = lVar2 + -1;
      lVar3 = lVar3 + 8;
    } while (lVar2 != 0);
    if (dVar4 != dVar5) goto LAB_82555128;
  }
  dVar4 = (double)((float)uStack_24 * lbl_82195864);
LAB_82555128:
  param_1[4] = (float)dVar4;
  return param_1[6];
}

