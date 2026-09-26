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
extern int fn_8265C990();
extern int fn_82BD7D68();
extern int fn_82BD8098();
extern int fn_82BDC680();


void fn_82BD7080(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0xc) != 0) {
      XamVoiceClose();
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
    fn_82BDC680(*(undefined4 *)(param_1 + 8));
    uVar1 = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0x38) != 0) {
      puVar2 = (undefined4 *)(param_1 + 0x2c);
      do {
        fn_82BD7D68(puVar2[1]);
        uVar1 = uVar1 + 1;
        puVar2 = puVar2 + 1;
        *puVar2 = 0;
      } while (uVar1 < *(uint *)(param_1 + 0x38));
    }
    uVar1 = 0;
    if (*(int *)(param_1 + 0x2c) != 0) {
      puVar2 = (undefined4 *)(param_1 + 0xc);
      do {
        (**(code **)(*(int *)puVar2[1] + 4))();
        uVar1 = uVar1 + 1;
        puVar2 = puVar2 + 1;
        *puVar2 = 0;
      } while (uVar1 < *(uint *)(param_1 + 0x2c));
    }
    fn_82BD8098(*(undefined4 *)(param_1 + 0x3c));
    XMsgCancelIORequest(param_1 + 0xa0,1);
    if (*(int *)(param_1 + 0xbc) != 0) {
      fn_8265C990(*(int *)(param_1 + 0xbc),0x608a2002);
      *(undefined4 *)(param_1 + 0xbc) = 0;
    }
    fn_8265C990(param_1,0x618a800b);
  }
  return;
}

