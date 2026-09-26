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
extern int fn_82AA66A8();
extern int fn_82ACC5D8();
extern int fn_82ACD310();
extern int fn_82ACD3D8();
extern int fn_82ACD528();


undefined8 fn_82ACD6E8(int *param_1,uint param_2,int param_3)

{
  uint uVar1;
  char cVar4;
  longlong lVar2;
  int iVar3;
  uint uVar5;
  uint uVar6;
  
  if (*(char *)(param_1 + 0x12) != '\0') {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1[0xc],0x12c0);
  }
  uVar6 = param_2;
  if ((param_3 != 1) || (cVar4 = fn_82ACD528(param_1,param_2), cVar4 != '\0')) {
    while( true ) {
      if (uVar6 == 0) {
        return 1;
      }
      if ((param_3 == 1) && (cVar4 = fn_82ACD528(param_1,uVar6), cVar4 == '\0')) break;
      if (param_1[0xf] == 0) {
        iVar3 = *param_1;
        uVar1 = uVar6 & 0xfffffffe;
        *(undefined4 *)(uVar1 + 0x28) = *(undefined4 *)(iVar3 + 4);
        *(uint *)((*(uint *)(iVar3 + 4) & 0xfffffffe) + 0x24) = uVar1 + 0x28;
        *(uint *)(uVar1 + 0x24) = iVar3 + 4U | 1;
        *(uint *)(iVar3 + 4) = uVar1;
      }
      else {
        uVar1 = param_1[0xf] & 0xfffffffe;
        uVar5 = uVar6 & 0xfffffffe;
        *(undefined4 *)(uVar5 + 0x28) = *(undefined4 *)(uVar1 + 0x28);
        *(uint *)((*(uint *)(uVar1 + 0x28) & 0xfffffffe) + 0x24) = uVar5 + 0x28;
        *(uint *)(uVar5 + 0x24) = uVar1 + 0x28;
        *(uint *)(uVar1 + 0x28) = uVar5;
      }
      param_1[0xf] = uVar6;
      *(uint *)(uVar6 + 0x10) = *(uint *)(uVar6 + 0x10) | 0x2000000;
      lVar2 = fn_82ACD3D8(param_1);
      if (lVar2 != 0) {
        while( true ) {
          uVar1 = uVar6 & 0xfffffffe;
          if ((*(uint *)(uVar1 + 0x24) & 1) == 0) {
            iVar3 = (*(uint *)(uVar1 + 0x24) & 0xfffffffe) - 0x28;
          }
          else {
            iVar3 = 0;
          }
          param_1[0xf] = iVar3;
          uVar5 = *(uint *)(uVar1 + 0x28);
          *(undefined4 *)((*(uint *)(uVar1 + 0x28) & 0xfffffffe) + 0x24) =
               *(undefined4 *)(uVar1 + 0x24);
          *(undefined4 *)(*(uint *)(uVar1 + 0x24) & 0xfffffffe) = *(undefined4 *)(uVar1 + 0x28);
          uVar5 = -(uint)((uVar5 & 1) == 0) & uVar5;
          *(uint *)(uVar6 + 0x10) = *(uint *)(uVar6 + 0x10) & 0xfdffffff;
          if (param_2 == uVar6) break;
          fn_82ACC5D8(param_1,uVar5,(lVar2 + -2) - (lVar2 + -3 + (ulonglong)(lVar2 + -2 == 0)));
          uVar6 = uVar5;
        }
        if ((int)lVar2 != 2) {
          return 0;
        }
        iVar3 = fn_82ACD310(param_1,*(undefined4 *)(param_2 + 0x1c),param_1[0xf]);
        if (iVar3 != param_1[0xf]) {
          return 0;
        }
        *(undefined1 *)(param_1 + 0x12) = 0;
        return 0;
      }
      uVar6 = *(uint *)(uVar6 + 0x20);
    }
  }
  return 0;
}

