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
#define ZEXT48(x) ((U64)((U32)(x)))
extern int fn_82475A58();
extern int fn_82475C28();
extern int fn_8249ABC0();
extern int fn_8249B8C0();
extern int fn_8249D1C0();
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831C6678;
extern unsigned int stack0x00000000;
extern V16 loadVectorLeftIndexed128();


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_82474EA8(int param_1)

{
  float *pfVar1;
  undefined8 in_r0;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = fn_8249ABC0();
  pfVar1 = *(float **)(iVar2 + 0xec);
  uVar3 = fn_8249D1C0(pfVar1,CONCAT44(*pfVar1 - lbl_831C6678,pfVar1[1] - lbl_831C6678),
                            CONCAT44(lbl_831C6678 + pfVar1[2],lbl_831C6678 + pfVar1[3]));
  *(undefined4 *)(param_1 + 0x9c) = uVar3;
  if (*(int *)(param_1 + 0x94) == 0) {
    fn_8249ABC0();
    loadVectorLeftIndexed128(in_r0,ZEXT48(&stack0x00000000) - 0x40);
    fn_82475C28(ZEXT48(&stack0x00000000) - 0x30,param_1);
    fn_82475A58(param_1,param_1 + 0x94,param_1 + 8);
  }
  iVar2 = fn_8249ABC0();
  fn_8249B8C0();
  uVar3 = lbl_821CC160;
  *(undefined4 *)(*(int *)(iVar2 + 0x110) + 0x28) = 1;
  *(undefined4 *)(param_1 + 0xa8) = uVar3;
  return;
}

