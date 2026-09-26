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
extern int fn_83037EB8();
extern unsigned int lbl_82160788;


undefined8 fn_82FAE840(int param_1,undefined4 *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  double dVar6;
  double dVar7;
  
  uVar5 = 0;
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_1 + 0xa0);
  dVar7 = lbl_82160788;
  if (param_3 != 0) {
    do {
      dVar6 = *(double *)(param_2 + 2) * dVar7;
      uVar1 = *param_2;
      uVar3 = *(int *)(param_1 + 0xa4) - *(int *)(param_1 + 0xa0) >> 3;
      if (((*(uint *)(param_1 + 0xa8) <= uVar3) &&
          (cVar4 = fn_83037EB8((int *)(param_1 + 0xa0),8), cVar4 == '\0')) ||
         (*(uint *)(param_1 + 0xa8) <= uVar3)) {
        return 2;
      }
      puVar2 = *(undefined8 **)(param_1 + 0xa4);
      *(undefined8 **)(param_1 + 0xa4) = puVar2 + 1;
      if (puVar2 == (undefined8 *)0x0) {
        return 2;
      }
      uVar5 = uVar5 + 1;
      param_2 = param_2 + 4;
      *puVar2 = CONCAT44(uVar1,(int)dVar6);
    } while (uVar5 < param_3);
  }
  return 1;
}

