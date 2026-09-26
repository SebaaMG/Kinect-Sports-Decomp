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
extern int fn_82E5A160();
extern int fn_82E5A170();
extern int fn_82E5A180();
extern int fn_82E5A190();
extern int fn_82E5A1A0();
extern int fn_82E5A1B0();
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;


undefined8 fn_82E5F1F0(int *param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  int aiStack_50 [2];
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  
  if ((param_1 == (int *)0x0) || ((param_2 & 0xffffffff) == 0)) {
    return 0xffffffff80004003;
  }
  aiStack_50[0] = 0;
  lVar1 = (**(code **)(*param_1 + 0x3c))(param_1,0xffffffff8214c290,&uStack_38,0xc,aiStack_50);
  uVar4 = 0;
  if ((lVar1 < 0) || (uVar4 = uStack_38, aiStack_50[0] == 0xc)) {
    iVar3 = (**(code **)(*param_1 + 0x3c))(param_1,0xffffffff8214c2a0,&uStack_48,0xc,aiStack_50);
    if (iVar3 < 0) {
      uStack_48 = uVar4;
      if ((int)lVar1 < 0) {
        return 0xffffffffc00d4654;
      }
    }
    else {
      if (aiStack_50[0] != 0xc) goto LAB_82e5f254;
      if ((int)lVar1 < 0) {
        uVar4 = uStack_48;
      }
    }
    uVar2 = fn_82E5A190(param_2,uStack_48);
    if ((((-1 < (int)uVar2) && (uVar2 = fn_82E5A160(param_2,uVar4), -1 < (int)uVar2)) &&
        (uVar2 = fn_82E5A1A0(param_2,uStack_44), -1 < (int)uVar2)) &&
       ((uVar2 = fn_82E5A170(param_2,uStack_34), -1 < (int)uVar2 &&
        (uVar2 = fn_82E5A1B0(param_2,uStack_40), -1 < (int)uVar2)))) {
      uVar2 = fn_82E5A180(param_2,uStack_30);
    }
  }
  else {
LAB_82e5f254:
    uVar2 = 0xffffffffc00d36bb;
  }
  return uVar2;
}

