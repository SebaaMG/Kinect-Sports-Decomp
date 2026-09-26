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
extern unsigned int *auStack_30;
extern int fn_827672A0();


double fn_82769828(int param_1,int param_2)

{
  bool bVar1;
  undefined1 *puVar2;
  undefined4 auStack_30 [2];
  short sStack_28;
  short sStack_26;
  short sStack_24;
  short sStack_22;
  
  auStack_30[0] = *(undefined4 *)(param_1 + 8);
  puVar2 = (undefined1 *)(**(int **)(param_1 + 8) + param_2 * 8 + *(int *)(param_1 + 0x10) + 4);
  fn_827672A0(auStack_30,CONCAT31(CONCAT21(CONCAT11(puVar2[3],puVar2[2]),puVar2[1]),*puVar2));
  if ((sStack_24 <= sStack_28) || (bVar1 = true, sStack_22 <= sStack_26)) {
    bVar1 = false;
  }
  if (!bVar1) {
    sStack_22 = 0;
    sStack_26 = 0;
  }
  return (double)(longlong)((int)sStack_22 - (int)sStack_26);
}

