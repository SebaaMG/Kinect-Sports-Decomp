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
extern int fn_82BE23E8();
extern int fn_82BE31D0();
extern int fn_82BE5240();
extern int fn_82BE6590();
extern int fn_82BE66A0();
extern int fn_82BEB9B8();
extern int fn_82BEE260();
extern int fn_82BEE670();
extern unsigned int lbl_8322B130;
extern unsigned int lbl_8322B1C8;


undefined8 fn_82BE3328(int param_1)

{
  longlong lVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  
  if ((lbl_8322B1C8 == 0) || (lVar1 = fn_82BE23E8(), lVar1 == 0)) {
    fn_82BE31D0(lbl_8322B130,0,0);
    iVar2 = thunk_FUN_82be5550(0x60);
    if (iVar2 == 0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = (undefined4 *)fn_82BEE260();
    }
    if (puVar3 != (undefined4 *)0x0) {
      iVar2 = fn_82BEE670(puVar3,param_1,*(undefined4 *)(param_1 + 0x158),
                                *(undefined4 *)(param_1 + 0x15c),1);
      if (iVar2 == 0) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        (**(code **)*puVar3)(puVar3,1);
        lVar1 = 0x452;
        uVar4 = 0xffffffff820e8f00;
      }
      else {
        lVar1 = fn_82BE6590(puVar3);
        if (lVar1 == 0) {
          lVar1 = fn_82BEB9B8(param_1,puVar3);
          if (lVar1 == 0) {
            return 0;
          }
          *(undefined4 *)(param_1 + 0x10) = 0;
          fn_82BE66A0(puVar3);
          (**(code **)*puVar3)(puVar3,1);
          uVar4 = 0xffffffff820e8e9c;
        }
        else {
          *(undefined4 *)(param_1 + 0x10) = 0;
          (**(code **)*puVar3)(puVar3,1);
          uVar4 = 0xffffffff820e8ed8;
        }
      }
      goto LAB_82be335c;
    }
    *(undefined4 *)(param_1 + 0x10) = 0;
    lVar1 = 0x65;
  }
  uVar4 = 0xffffffff82196582;
LAB_82be335c:
  uVar4 = fn_82BE5240(param_1,lVar1,uVar4);
  return uVar4;
}

