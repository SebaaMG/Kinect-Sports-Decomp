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
extern int fn_826ADE60();
extern int fn_826B55A0();
extern int fn_826C36F0();
extern int fn_826C43B0();
extern int fn_826C4E78();
extern unsigned int iStack_48;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_44;


void fn_826C4FD8(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  char cVar2;
  int *piStack_50;
  int *piStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  piStack_50 = param_1;
  iStack_48 = param_2;
  uStack_44 = param_3;
  uStack_40 = param_4;
  piStack_4c = (int *)(**(code **)(*param_1 + 0x24))(param_1,param_2,&uStack_3c);
  if ((*(byte *)(piStack_4c[0x1d] + 0x66) & 0x10) != 0) {
    piStack_4c = *(int **)(param_2 + 0x18);
  }
  uVar1 = *(ushort *)(piStack_4c + 0x31);
  *(ushort *)(piStack_4c + 0x31) = uVar1 + 1;
  if (uVar1 < 0xff) {
    fn_826C43B0(&piStack_50);
    fn_826B55A0(param_1[0xe],piStack_4c,param_1[0x12],param_1[0x13],
                      *(undefined4 *)(param_2 + 4),param_1 + 0xf,
                      *(undefined1 *)((int)param_1 + 0x66));
    fn_826C4E78(&piStack_50);
  }
  else {
    cVar2 = (**(code **)(*piStack_4c + 4))();
    if (cVar2 != '\0') {
      fn_826ADE60(piStack_4c,0xffffffff8200b9a8);
    }
  }
  *(short *)(piStack_4c + 0x31) = *(short *)(piStack_4c + 0x31) + -1;
  fn_826C36F0(&piStack_50);
  return;
}

