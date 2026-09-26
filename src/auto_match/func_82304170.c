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
extern int fn_822B84C0();
extern int fn_822C6880();
extern int fn_822C72E0();
extern int fn_8250E790();
extern int fn_8250EC68();
extern int fn_8255FA88();
extern int fn_827F6210();
extern int fn_827F6308();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


void fn_82304170(double param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  double dVar3;
  
  *(float *)(param_2 + 0x58) = (float)(param_1 + (double)*(float *)(param_2 + 0x58));
  if (*(char *)(param_2 + 0xc0) == '\0') {
    fn_8250E790(param_2 + 0x6c);
    *(float *)(*(int *)(param_2 + 0x54) + 0x228) =
         (float)((double)*(float *)(*(int *)(param_2 + 0x54) + 0x228) - param_1);
    dVar3 = (double)lbl_821CC160;
    if ((double)*(float *)(*(int *)(param_2 + 0x54) + 0x228) < dVar3) {
      fn_8250EC68(param_2 + 0x6c);
      uVar1 = fn_822B84C0(*(undefined4 *)(*(int *)(param_2 + 0x54) + 0x118),
                                (ulonglong)*(uint *)(param_2 + 0xac),
                                (ulonglong)*(uint *)(param_2 + 0xac) + 4);
      fn_827F6308(uVar1,1);
      fn_827F6210((double)lbl_821CA460,uVar1);
      *(undefined1 *)(param_2 + 0xc0) = 1;
      *(float *)(*(int *)(param_2 + 0x54) + 0x228) = (float)dVar3;
      *(undefined4 *)(param_2 + 0x50) = 1;
      fn_822C6880(*(undefined4 *)(param_2 + 0x24));
    }
  }
  else {
    iVar2 = fn_8255FA88(*(undefined4 *)
                               (*(int *)(*(int *)(*(int *)(param_2 + 0x54) + 0x118) + 0xc) + 0x110))
    ;
    if (iVar2 != 0) {
      fn_822C72E0(param_2,0xffffffff821aeb2c);
    }
  }
  return;
}

