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
extern unsigned int *auStack_4c;
extern unsigned int *auStack_50;
extern int fn_82E4FE40();
extern int fn_82E51DE8();
extern unsigned int uStack_48;
extern unsigned int uStack_54;
extern unsigned int uStack_58;


longlong fn_82E520C8(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 *puStack_60;
  undefined1 *puStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [4];
  undefined4 uStack_48;
  
  puStack_60 = (undefined1 *)0x0;
  uStack_58 = 0;
  puStack_5c = (undefined1 *)0x0;
  uStack_54 = 0;
  lVar6 = 0;
  iVar1 = (**(code **)(*param_1 + 0x40))(param_1,0xffffffff8214c290,&puStack_60,&uStack_58);
  uVar5 = 0xffffffff8214c2a0;
  iVar2 = (**(code **)(*param_1 + 0x40))(param_1,0xffffffff8214c2a0,&puStack_5c,&uStack_54);
  if (iVar1 == 0) {
    puVar3 = puStack_60;
    uVar4 = uStack_58;
    if (iVar2 == 0) goto LAB_82e521e8;
  }
  else if (iVar2 == 0) {
    uVar5 = 0xffffffff8214c290;
    puVar3 = puStack_5c;
    uVar4 = uStack_54;
  }
  else {
    uStack_48 = 0;
    lVar6 = fn_82E51DE8(param_1,param_1[0x18],auStack_50,auStack_4c);
    if ((lVar6 < 0) ||
       (lVar6 = (**(code **)(*param_1 + 0x68))(param_1,0xffffffff8214c290,auStack_50,0xc), lVar6 < 0
       )) goto LAB_82e521e8;
    uVar4 = 0xc;
    puVar3 = auStack_50;
  }
  lVar6 = (**(code **)(*param_1 + 0x68))(param_1,uVar5,puVar3,uVar4);
LAB_82e521e8:
  fn_82E4FE40(puStack_60);
  puStack_60 = (undefined1 *)0x0;
  fn_82E4FE40(puStack_5c);
  return lVar6;
}

