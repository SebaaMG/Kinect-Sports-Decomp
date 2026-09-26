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
#define CONCAT11(h,l) ((U16)((((U8)(h)) << 8) | ((U8)(l))))
#define CONCAT21(h,l) ((U32)((((U16)(h)) << 8) | ((U8)(l))))
#define CONCAT31(h,l) ((U32)((((U32)(h)) << 8) | ((U8)(l))))


undefined8
fn_8281B838(int *param_1,ulonglong param_2,char param_3,undefined4 *param_4,int *param_5)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar3 = (uint)param_1 & 3;
  for (; (uVar3 != 0 && ((param_2 & 0xffffffff) != 0)); param_2 = param_2 - 1) {
    if (*(char *)param_1 != param_3) goto LAB_8281b8f4;
    param_1 = (int *)((int)param_1 + 1);
    uVar3 = uVar3 - 1;
  }
  do {
    if ((param_2 & 0xffffffff) < 4) {
      uVar2 = param_2 & 0xffffffff;
      while( true ) {
        if (uVar2 == 0) {
          return 0;
        }
        if (*(char *)param_1 != param_3) break;
        param_2 = param_2 - 1;
        param_1 = (int *)((int)param_1 + 1);
        uVar2 = param_2;
      }
LAB_8281b8f4:
      *param_4 = param_1;
      *param_5 = 0;
      uVar2 = param_2 & 0xffffffff;
      for (; (uVar2 != 0 && (*(char *)param_1 != param_3)); param_1 = (int *)((int)param_1 + 1)) {
        param_2 = param_2 - 1;
        *param_5 = *param_5 + 1;
        uVar2 = param_2;
      }
      return 1;
    }
    if (*param_1 != CONCAT31(CONCAT21(CONCAT11(param_3,param_3),param_3),param_3)) {
      cVar1 = *(char *)param_1;
      for (; (cVar1 == param_3 && ((param_2 & 0xffffffff) != 0)); param_2 = param_2 - 1) {
        param_1 = (int *)((int)param_1 + 1);
        cVar1 = *(char *)param_1;
      }
      goto LAB_8281b8f4;
    }
    param_2 = param_2 - 4;
    param_1 = param_1 + 1;
  } while( true );
}

