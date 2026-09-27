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
extern int fn_82535F50();
extern int fn_825529B0();
extern int fn_82552AD8();
extern int fn_82552B50();
extern float lbl_82005748;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831D464C;
extern unsigned int stack0x00000020;


void fn_825C1570(double param_1,int param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  double dVar3;
  double dVar4;
  
  dVar4 = (double)lbl_821CC160;
  if (dVar4 < (double)*(float *)(param_2 + 0x54)) {
    dVar3 = -(double)(float)((double)lbl_831D464C * param_1 - (double)*(float *)(param_2 + 0x54));
    *(float *)(param_2 + 0x54) = (float)dVar3;
    if (dVar3 <= dVar4) {
      param_4 = 1;
    }
    else if (*(int *)(param_2 + 100) != 0) {
      puVar2 = (undefined4 *)(param_2 + 0x58);
      iVar1 = fn_825529B0(puVar2);
      if (iVar1 != 0) {
        fn_82535F50(*puVar2,&stack0x00000020);
        fn_82552AD8((double)(*(float *)(param_2 + 0x54) * lbl_82005748),puVar2,
                          0xffffffff821c8e40);
      }
    }
  }
  if ((param_4 != 0) && (*(int *)(param_2 + 100) != 0)) {
    iVar1 = fn_825529B0(param_2 + 0x58);
    if (iVar1 != 0) {
      fn_82552B50(param_2 + 0x58,1);
    }
    *(float *)(param_2 + 0x54) = (float)dVar4;
    *(undefined4 *)(param_2 + 100) = 0;
  }
  return;
}

