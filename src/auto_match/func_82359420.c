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
extern int fn_82535298();
extern int fn_82536070();
extern int fn_82536288();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_82195598;
extern unsigned int lbl_831DB254;


void fn_82359420(double param_1,int param_2,undefined4 *param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  float fVar3;
  undefined4 uVar4;
  longlong alStack_30;
  
  if (*(int *)(param_2 + 0xbc) != 0) {
    fVar3 = (float)((double)*(float *)(param_2 + 0xc4) - param_1);
    *(float *)(param_2 + 0xc4) = fVar3;
    iVar1 = (int)(float)(longlong)
                        ((double)(*(float *)(param_2 + 200) - lbl_8218E8E8) - lbl_82195598);
    iVar2 = (int)(float)(longlong)((double)(fVar3 - lbl_8218E8E8) - lbl_82195598);
    alStack_30 = (longlong)iVar2;
    if (iVar2 < 0) {
      if (((iVar2 < iVar1) && (iVar2 != *(int *)(param_2 + 0xc0))) &&
         (*(int *)(param_2 + 0xc0) = iVar2, iVar2 == -1)) {
        *(undefined4 *)(param_2 + 0x108) = 1;
      }
    }
    else if (((iVar2 < 10) && (iVar2 < iVar1)) && (iVar2 != *(int *)(param_2 + 0xc0))) {
      *(int *)(param_2 + 0xc0) = iVar2;
      fn_82536070(0xffffffff821b24b8,(&lbl_831DB254)[iVar2]);
      alStack_30 = CONCAT44(*param_5,((uint)(alStack_30)));
      uVar4 = fn_82535298(&alStack_30,*param_3,0xffffffff83296bc0,0xffffffff83296bd0);
      alStack_30 = CONCAT44(uVar4,((uint)(alStack_30)));
      fn_82536288(&alStack_30);
    }
    *(undefined4 *)(param_2 + 200) = *(undefined4 *)(param_2 + 0xc4);
  }
  return;
}

