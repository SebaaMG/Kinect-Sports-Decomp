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
#define TBLr 0
extern int fn_82CE8E78();
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B4A0;


undefined8 fn_82CE9108(int param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 *puVar4;
  byte bStack_100;
  byte bStack_ff;
  
  uVar2 = fn_82CE8E78(param_1,0,&bStack_100,0);
  iVar3 = (int)uVar2;
  do {
    if (iVar3 != 0) {
      return uVar2;
    }
    switch(bStack_ff) {
    case 0:
    case 1:
      iVar3 = KeTlsGetValue(lbl_8323B4A0);
      puVar4 = *(undefined4 **)(iVar3 + 4);
      if (puVar4 < *(undefined4 **)(iVar3 + 0xc)) {
        *puVar4 = "TtPhysics";
LAB_82ce9318:
        uVar2 = TBLr;
        puVar4[1] = (int)uVar2;
        *(undefined4 **)(iVar3 + 4) = puVar4 + 3;
      }
      break;
    case 2:
      iVar3 = KeTlsGetValue(lbl_8323B4A0);
      puVar4 = *(undefined4 **)(iVar3 + 4);
      if (puVar4 < *(undefined4 **)(iVar3 + 0xc)) {
        *puVar4 = "TtCollision Query";
        goto LAB_82ce9318;
      }
      break;
    case 3:
      iVar3 = KeTlsGetValue(lbl_8323B4A0);
      puVar4 = *(undefined4 **)(iVar3 + 4);
      if (puVar4 < *(undefined4 **)(iVar3 + 0xc)) {
        *puVar4 = "TtRayCast Query";
        goto LAB_82ce9318;
      }
      break;
    case 4:
      iVar3 = KeTlsGetValue(lbl_8323B4A0);
      puVar4 = *(undefined4 **)(iVar3 + 4);
      if (puVar4 < *(undefined4 **)(iVar3 + 0xc)) {
        *puVar4 = "TtAnimation";
        goto LAB_82ce9318;
      }
      break;
    case 5:
      iVar3 = KeTlsGetValue(lbl_8323B4A0);
      puVar4 = *(undefined4 **)(iVar3 + 4);
      if (puVar4 < *(undefined4 **)(iVar3 + 0xc)) {
        *puVar4 = "TtBehavior";
        goto LAB_82ce9318;
      }
      break;
    case 6:
      iVar3 = KeTlsGetValue(lbl_8323B4A0);
      puVar4 = *(undefined4 **)(iVar3 + 4);
      if (puVar4 < *(undefined4 **)(iVar3 + 0xc)) {
        *puVar4 = "TtCloth";
        goto LAB_82ce9318;
      }
      break;
    case 7:
      iVar3 = KeTlsGetValue(lbl_8323B4A0);
      puVar4 = *(undefined4 **)(iVar3 + 4);
      if (puVar4 < *(undefined4 **)(iVar3 + 0xc)) {
        *puVar4 = "TtPathfinding";
        goto LAB_82ce9318;
      }
      break;
    default:
      iVar3 = KeTlsGetValue(lbl_8323B4A0);
      puVar4 = *(undefined4 **)(iVar3 + 4);
      if (puVar4 < *(undefined4 **)(iVar3 + 0xc)) {
        *puVar4 = "TtUnknownJobs";
        goto LAB_82ce9318;
      }
      break;
    case 9:
      iVar3 = KeTlsGetValue(lbl_8323B4A0);
      puVar4 = *(undefined4 **)(iVar3 + 4);
      if (puVar4 < *(undefined4 **)(iVar3 + 0xc)) {
        *puVar4 = "TtCharacter Proxy";
        goto LAB_82ce9318;
      }
      break;
    case 10:
      iVar3 = KeTlsGetValue(lbl_8323B4A0);
      puVar4 = *(undefined4 **)(iVar3 + 4);
      if (puVar4 < *(undefined4 **)(iVar3 + 0xc)) {
        *puVar4 = "TtUserJob";
        goto LAB_82ce9318;
      }
    }
    uVar2 = (**(code **)(*(int *)((uint)bStack_ff * 0x10 + param_1 + 0xd8) + (uint)bStack_100 * 4))
                      (param_1,&bStack_100);
    iVar3 = KeTlsGetValue(lbl_8323B4A0);
    puVar4 = *(undefined4 **)(iVar3 + 4);
    if (puVar4 < *(undefined4 **)(iVar3 + 0xc)) {
      *puVar4 = &lbl_82132BC4;
      uVar1 = TBLr;
      puVar4[1] = (int)uVar1;
      *(undefined4 **)(iVar3 + 4) = puVar4 + 3;
    }
    iVar3 = (int)uVar2;
  } while( true );
}

