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
extern int fn_827D50B8();
extern int fn_827D50C0();
extern int fn_827D9ED0();
extern int fn_827D9ED8();
extern int fn_827E4210();
extern int fn_8281C448();
extern int fn_82A1E6A0();
extern int fn_82A2A108();


undefined8 fn_827DD5C8(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar7;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar8;
  undefined8 uVar6;
  int aiStack_40 [16];
  
  uVar1 = *param_2;
  puVar2 = (undefined4 *)param_2[7];
  iVar7 = fn_827D9ED8(uVar1);
  puVar2[2] = iVar7 + param_2[3];
  lVar4 = fn_827E4210(param_1);
  uVar3 = param_2[4];
  lVar5 = fn_827E4210(param_1);
  uVar8 = fn_82A1E6A0(0,1,0,0);
  puVar2[4] = uVar8;
  puVar2[3] = 0;
  puVar2[1] = 0;
  *puVar2 = 0;
  uVar8 = param_2[5];
  uVar6 = fn_827D9ED0(uVar1);
  iVar7 = fn_82A2A108(uVar6,uVar8,lVar4 + ((ulonglong)uVar3 - 1) & ~(lVar5 - 1U),aiStack_40,
                            puVar2);
  if (iVar7 == 0) {
LAB_827dd66c:
    uVar6 = thunk_FUN_82a2b798();
  }
  else {
    if (aiStack_40[0] == 0) {
      fn_8281C448(0xffffffff8201c478);
      uVar1 = param_2[1];
      uVar6 = thunk_FUN_82a2b798();
      fn_827D50C0(uVar1,uVar6);
      iVar7 = fn_827D50B8(param_2[1]);
      if (((iVar7 != 0) && (iVar7 = fn_827D50B8(param_2[1]), iVar7 != 0x3e5)) &&
         (iVar7 = fn_827D50B8(param_2[1]), iVar7 != 0x3e4)) goto LAB_827dd66c;
      uVar6 = 0xffffffff8201c494;
    }
    else {
      uVar6 = 0xffffffff8201c4b0;
    }
    fn_8281C448(uVar6);
    uVar6 = 0;
  }
  return uVar6;
}

