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
extern unsigned int *auStack_50;
extern int fn_827672A0();


float * fn_82769B98(int param_1,int param_2,float *param_3)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 auStack_50 [2];
  short sStack_48;
  short sStack_46;
  short sStack_44;
  short sStack_42;
  
  iVar5 = param_2 * 8 + *(int *)(param_1 + 0x10);
  auStack_50[0] = *(undefined4 *)(param_1 + 8);
  iVar3 = iVar5 + 4;
  iVar1 = **(int **)(param_1 + 8);
  iVar4 = iVar1 + iVar3;
  fn_827672A0(auStack_50,
                CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar4 + 3),*(undefined1 *)(iVar4 + 2)),
                                  *(undefined1 *)(iVar4 + 1)),*(undefined1 *)(iVar1 + iVar3)));
  if ((sStack_44 <= sStack_48) || (bVar2 = true, sStack_42 <= sStack_46)) {
    bVar2 = false;
  }
  if (!bVar2) {
    iVar5 = iVar5 + 2;
    sStack_42 = 0;
    sStack_46 = 0;
    sStack_48 = 0;
    sStack_44 = CONCAT11(*(undefined1 *)(iVar1 + iVar5 + 1),*(undefined1 *)(iVar1 + iVar5));
  }
  param_3[2] = (float)(longlong)sStack_44;
  param_3[3] = (float)(longlong)sStack_42;
  param_3[1] = (float)(longlong)sStack_46;
  *param_3 = (float)(longlong)sStack_48;
  return param_3;
}

