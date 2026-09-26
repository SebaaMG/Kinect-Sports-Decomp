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
extern unsigned int fStack0000001c;
extern unsigned int fStack_1c;
extern int fn_824BF8A8();
extern int fn_82F63108();
extern unsigned int iStack_20;
extern unsigned int stack0x0000001c;


void fn_824DF2E8(double param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  float fStack0000001c;
  int iStack_20;
  float fStack_1c;
  
  iStack_20 = param_2[7];
  fStack0000001c = (float)param_1;
  fStack_1c = (float)param_1;
  if ((param_2[1] - *param_2 & 0xfffffff8U) != 0) {
    piVar1 = (int *)param_2[0xc];
    if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      fn_82F63108();
    }
    iVar2 = (**(code **)(*piVar1 + 4))(piVar1,param_2 + 6,&stack0x0000001c);
    if (iVar2 == 0) goto LAB_824df358;
  }
  *(ulonglong *)(param_2 + 5) = CONCAT44(iStack_20,fStack_1c);
LAB_824df358:
  fn_824BF8A8(param_2,&iStack_20);
  return;
}

