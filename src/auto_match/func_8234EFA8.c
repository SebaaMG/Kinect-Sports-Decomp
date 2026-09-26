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
extern int fn_8234F188();
extern int fn_8255FD70();
extern int fn_8265CA20();
extern unsigned int lbl_821954E8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;
extern unsigned int uStack_30;


void fn_8234EFA8(undefined4 *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  undefined8 uStack_30;
  
  fn_8255FD70(&uStack_30,*(undefined4 *)*param_1,param_2);
  iVar3 = (int)(((U64)(uStack_30) >> 0) & 0xFFFFFFFF);
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  iVar1 = (int)((float)(longlong)((((U64)(uStack_30) >> 32) & 0xFFFFFFFF) - (int)(((U64)(uStack_30) >> 0) & 0xFFFFFFFF) >> 2) *
               ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460));
  iVar2 = *(int *)(iVar1 * 4 + (int)(((U64)(uStack_30) >> 0) & 0xFFFFFFFF));
  dVar4 = (double)*(float *)(iVar2 + 0x4c);
  uStack_30 = (longlong)iVar1;
  if (dVar4 == (double)lbl_821954E8) {
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    uStack_30 = CONCAT44(lbl_83265A28,iVar1) & 0x7fffffffffffff | 0x3f80000000000000;
    dVar4 = (double)((((U64)(uStack_30) >> 0) & 0xFFFFFFFF) - lbl_821CA460);
  }
  fn_8234F188(dVar4,(double)*(float *)(iVar2 + 0x48),(double)*(float *)(iVar2 + 0x50),
                    (double)*(float *)(iVar2 + 0x54),param_1,iVar2 + 0x40,iVar2 + 0x44);
  if (iVar3 != 0) {
    fn_8265CA20(iVar3);
  }
  return;
}

