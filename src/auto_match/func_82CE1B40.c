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
extern int fn_82A2B798();
extern unsigned int iStack_58;
extern unsigned int uStack_40;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_52;
extern unsigned int uStack_54;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


ulonglong fn_82CE1B40(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                       undefined2 param_5,undefined2 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar2;
  longlong lVar1;
  uint uVar3;
  uint *in_stack_00000054;
  undefined4 *in_stack_0000005c;
  int in_stack_00000064;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int iStack_58;
  undefined2 uStack_54;
  undefined2 uStack_52;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint uStack_48;
  undefined4 *puStack_44;
  undefined4 uStack_40;
  
  uVar3 = param_3 * 0x52e + 8;
  if ((uVar3 <= *in_stack_00000054) && (in_stack_0000005c != (undefined4 *)0x0)) {
    puStack_44 = in_stack_0000005c;
    *in_stack_0000005c = 0;
    in_stack_0000005c[1] = 0;
    uStack_48 = *in_stack_00000054;
    uStack_60 = param_1;
    uStack_5c = param_2;
    iStack_58 = param_3;
    uStack_54 = param_5;
    uStack_52 = param_6;
    uStack_50 = param_7;
    uStack_4c = param_8;
    uStack_40 = param_4;
    iVar2 = XMsgStartIORequest(0xfb,0xb001c,in_stack_00000064,&uStack_60,0x24);
    if (-1 < iVar2) {
      if (in_stack_00000064 == 0) {
        lVar1 = fn_82A2B798();
        return -(ulonglong)(lVar1 != 0) & 0x65b;
      }
      return 0x3e5;
    }
    if (iVar2 != -0x7feaadf9) {
      return 0x65b;
    }
  }
  *in_stack_00000054 = uVar3;
  return 0x7a;
}

