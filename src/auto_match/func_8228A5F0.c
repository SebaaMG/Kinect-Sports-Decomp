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
extern unsigned int *auStack_400;
extern unsigned int *auStack_40c;
extern int fn_8228ABB8();
extern int fn_8228ACD0();
extern int fn_82486098();
extern int fn_82520780();
extern unsigned int lbl_8218E8E8;
extern unsigned int uStack_410;


void fn_8228A5F0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 uStack_410;
  undefined4 auStack_40c [3];
  undefined1 auStack_400 [1000];
  
  if (*(int *)(*(int *)(param_1 + 0x11f0) + 0x18b8) == 1) {
    if (*(int *)(param_1 + 0x6e8) == 4) {
      if (*(int *)(param_1 + 0x768) != 4) {
        *(undefined4 *)(param_1 + 0x768) = 4;
      }
    }
    else {
      iVar1 = *(int *)(param_1 + 0x728);
      if (iVar1 != *(int *)(param_1 + 0x768)) {
        if (iVar1 == 2) {
          uStack_410 = *(undefined4 *)(*(int *)(param_1 + 0x740) + 0x8c4);
          auStack_40c[0] = *(undefined4 *)(*(int *)(param_1 + 0x740) + 0x8c8);
          uVar3 = fn_82520780((double)lbl_8218E8E8,0xffffffff83265a28);
          iVar1 = *(int *)(param_1 + 0x11f0);
          uVar2 = *(undefined4 *)(param_1 + 0x744);
          *(undefined4 *)(iVar1 + 0x1498) = 2;
          *(undefined4 *)(iVar1 + 0x14a0) = uVar2;
          fn_82486098(iVar1,3,uVar3,auStack_400);
          fn_8228ABB8(param_1,3,auStack_400,&uStack_410,auStack_40c);
          *(undefined4 *)(param_1 + 0x768) = 2;
          *(undefined4 *)(param_1 + 0x778) = 0;
          *(undefined4 *)(param_1 + 0x77c) = 1;
          *(undefined4 *)(param_1 + 0x784) = *(undefined4 *)(param_1 + 0x744);
        }
        else if (iVar1 == 3) {
          fn_8228ACD0(param_1,3,param_1 + 0x520);
          *(undefined8 *)(param_1 + 0x770) = 0;
          *(undefined4 *)(param_1 + 0x768) = 3;
          *(undefined4 *)(param_1 + 0x778) = 0;
          *(undefined4 *)(param_1 + 0x77c) = 1;
        }
      }
    }
  }
  return;
}

