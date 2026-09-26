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
extern int fn_82539560();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_820288B0;
extern unsigned int lbl_8207F270;
extern unsigned int lbl_8207F524;
extern unsigned int lbl_82186E18;
extern unsigned int lbl_821AAD20;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_830790C0(int param_1,float *param_2,float *param_3,undefined4 *param_4)

{
  float fVar1;
  double dVar2;
  double dVar3;
  
  fVar1 = *(float *)(param_1 + 0x70f4);
  dVar2 = (double)fVar1;
  dVar3 = (double)lbl_821AAD20;
  if (*(char *)(param_1 + 0x70fc) == '\0') {
    *param_3 = fVar1;
    *param_2 = fVar1;
    *param_4 = *(undefined4 *)(param_1 + 0x70f4);
    return;
  }
  if (dVar2 < dVar3) {
                    /* WARNING: Subroutine does not return */
    fn_82539560(dVar2,(double)lbl_8207F524,(double)lbl_82002AE0,(double)lbl_820288B0,dVar3);
  }
                    /* WARNING: Subroutine does not return */
  fn_82539560(dVar2,(double)lbl_82002AE0,(double)lbl_8207F270,dVar3,(double)lbl_82186E18);
}

