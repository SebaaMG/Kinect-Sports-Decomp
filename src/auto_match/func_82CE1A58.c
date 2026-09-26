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
extern unsigned int iStack_48;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_42;
extern unsigned int uStack_44;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


ulonglong fn_82CE1A58(undefined4 param_1,undefined4 param_2,int param_3,undefined2 param_4,
                       undefined2 param_5,undefined4 param_6,undefined4 param_7,uint *param_8)

{
  int iVar2;
  longlong lVar1;
  uint uVar3;
  undefined4 *in_stack_00000054;
  int in_stack_0000005c;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  undefined2 uStack_44;
  undefined2 uStack_42;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint uStack_38;
  undefined4 *puStack_34;
  
  uVar3 = param_3 * 0x52e + 8;
  if ((uVar3 <= *param_8) && (in_stack_00000054 != (undefined4 *)0x0)) {
    puStack_34 = in_stack_00000054;
    *in_stack_00000054 = 0;
    in_stack_00000054[1] = 0;
    uStack_38 = *param_8;
    uStack_50 = param_1;
    uStack_4c = param_2;
    iStack_48 = param_3;
    uStack_44 = param_4;
    uStack_42 = param_5;
    uStack_40 = param_6;
    uStack_3c = param_7;
    iVar2 = XMsgStartIORequest(0xfb,0xb0016,in_stack_0000005c,&uStack_50,0x20);
    if (-1 < iVar2) {
      if (in_stack_0000005c == 0) {
        lVar1 = fn_82A2B798();
        return -(ulonglong)(lVar1 != 0) & 0x65b;
      }
      return 0x3e5;
    }
    if (iVar2 != -0x7feaadf9) {
      return 0x65b;
    }
  }
  *param_8 = uVar3;
  return 0x7a;
}

