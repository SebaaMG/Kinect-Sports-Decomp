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
extern int fn_82359698();
extern int fn_8236B4F0();
extern int fn_8236B7E0();
extern int fn_823CC298();
extern int fn_823D6088();
extern int fn_82508078();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821CA460;


void fn_823CF178(int param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 in_register_00010010;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  
  iVar1 = *(int *)(param_1 + 0x41c);
  *(undefined4 *)(param_1 + 0x1028) = 0;
  *(undefined4 *)(param_1 + 0x1024) = lbl_8218E8E8;
  puVar2 = (undefined4 *)(param_1 + 0xd30U & 0xfffffff0);
  *puVar2 = in_register_00010010;
  puVar2[1] = in_register_00010014;
  puVar2[2] = in_register_00010018;
  puVar2[3] = in_vr1;
  if (((((iVar1 == 2) || (iVar1 == 8)) || (iVar1 == 9)) || ((iVar1 == 6 || (iVar1 == 7)))) &&
     (*(int *)(param_1 + 0x4c0) == 0)) {
    fn_82508078(*(undefined4 *)(param_1 + 0xa4),0xffffffff821b60b4,0);
  }
  fn_823CC298(*(undefined4 *)(param_1 + 0x4b8),2);
  *(int *)(param_1 + 0xd80) = (int)param_2;
  fn_82359698(param_1,7);
  fn_8236B7E0(param_1,param_2,2);
  if (*(int *)(*(int *)(param_1 + 0x4b0) + 0xd4) == 0) {
    fn_8236B4F0((double)lbl_821CA460,param_1);
  }
  fn_823D6088(param_1 + 0x9f8);
  return;
}

