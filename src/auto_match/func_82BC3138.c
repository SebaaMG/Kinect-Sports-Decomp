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
extern unsigned int *auStack_50;
extern int fn_82B9CF38();
extern int fn_82B9D3D8();
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_82BC3138(int param_1,undefined4 *param_2,int *param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 auStack_50 [32];
  uint uStack_30;
  undefined4 uStack_2c;
  
  iVar1 = *(int *)(param_1 + 0x3b8);
  fn_82B9CF38(*(undefined4 *)(iVar1 + 0x600),*(undefined4 *)(param_1 + 0xac),auStack_50,
                    *(undefined4 *)(iVar1 + 0x568),0xffffffff82b7c800,iVar1);
  iVar1 = *(int *)(param_1 + 0x3b8);
  fn_82B9D3D8(*(undefined4 *)(iVar1 + 0x600),*(undefined4 *)(param_1 + 0xac),param_4,
                    *(undefined4 *)(iVar1 + 0x568),0xffffffff82b7c800,iVar1);
  *param_2 = uStack_2c;
  *param_3 = *(int *)(param_1 + 0xa8) +
             ((int)uStack_30 >> 2) + (uint)((int)uStack_30 < 0 && (uStack_30 & 3) != 0);
  return;
}

