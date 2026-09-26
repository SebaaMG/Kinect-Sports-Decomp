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
extern int fn_82BE8D50();
extern int fn_82BECB18();
extern int fn_82BF7540();
extern int fn_82BF7B48();
extern unsigned int stack0x0000001c;
extern unsigned int uStack0000001c;


undefined8 fn_82BED230(int param_1,undefined4 param_2,code *param_3,undefined8 param_4)

{
  int iVar3;
  undefined8 uVar1;
  ulonglong uVar2;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uStack0000001c;
  int aiStack_30 [12];
  
  if (*(int *)(param_1 + 0x50) != 2) {
    aiStack_30[0] = 0;
    uStack0000001c = param_2;
    iVar3 = fn_82BF7540(param_1 + 0xc,&stack0x0000001c,aiStack_30);
    iVar5 = aiStack_30[0];
    if (iVar3 != 0) {
      uVar1 = (**(code **)(**(int **)(param_1 + 0x4c) + 4))();
      *(undefined8 *)(iVar5 + 0x10) = uVar1;
      if (param_3 != (code *)0x0) {
        if (((*(int *)(iVar5 + 0x18) != 0) && (*(char **)(iVar5 + 0x1c) != (char *)0x0)) &&
           (**(char **)(iVar5 + 0x1c) != '\0')) {
          uVar2 = thunk_FUN_82be5550(0x1c);
          if ((uVar2 & 0xffffffff) == 0) {
            puVar4 = (undefined4 *)0x0;
          }
          else {
            puVar4 = (undefined4 *)
                     fn_82BF7B48(uVar2,uStack0000001c,*(undefined4 *)(param_1 + 8),
                                     *(undefined4 *)(iVar5 + 0x1c),param_3,param_4);
          }
          if (puVar4 == (undefined4 *)0x0) {
            return 0;
          }
          iVar5 = fn_82BECB18(param_1,puVar4);
          if (iVar5 == 0) {
            (**(code **)*puVar4)(puVar4,1);
            return 0;
          }
          fn_82BE8D50(puVar4);
          return 1;
        }
        (*param_3)(uStack0000001c,0,param_4);
      }
      return 1;
    }
  }
  return 0;
}

