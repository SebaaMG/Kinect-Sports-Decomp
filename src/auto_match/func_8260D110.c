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
extern unsigned int *auStack_80;
extern int fn_8256D798();
extern int fn_8257EB18();
extern int fn_8259BB38();
extern int fn_8260D428();
extern int fn_8260D4E0();
extern int fn_8265E4C8();
extern int fn_82664070();
extern int fn_82664518();
extern int fn_82664888();
extern int fn_827D96A0();
extern int fn_827DDDA0();
extern int fn_827DEA98();
extern int fn_827DEAA8();
extern int fn_827DEB38();
extern int fn_827DEB60();
extern int fn_82F64068();
extern int fn_82F65390();
extern unsigned int iStack_9c;
extern unsigned int lbl_821CAABC;
extern unsigned int uStack_5c;
extern unsigned int uStack_a0;


void fn_8260D110(int param_1)

{
  int iVar2;
  undefined4 *puVar3;
  char cVar4;
  undefined8 uVar1;
  undefined4 *puVar6;
  longlong lVar5;
  undefined4 uStack_a0;
  int iStack_9c;
  undefined **appuStack_98 [6];
  undefined1 auStack_80 [16];
  undefined4 ***apppuStack_70 [5];
  uint uStack_5c;
  
  puVar6 = (undefined4 *)(param_1 + 0x16c);
  iVar2 = fn_8260D428(puVar6,0,*(undefined4 *)(param_1 + 0x17c),0xffffffff821caaa8,0x13);
  if (iVar2 == 0) {
    fn_8257EB18();
    puVar3 = puVar6;
    if (0xf < *(uint *)(param_1 + 0x180)) {
      puVar3 = (undefined4 *)*puVar6;
    }
    iVar2 = fn_82664070(puVar3);
    if (iVar2 < 0) {
      thunk_FUN_82a2b798();
    }
    fn_8260D4E0(apppuStack_70,puVar6);
    if (uStack_5c < 0x10) {
      apppuStack_70[0] = apppuStack_70;
    }
    iVar2 = fn_8265E4C8(apppuStack_70[0]);
    if (iVar2 < 0) {
      thunk_FUN_82a2b798();
    }
    fn_827DDDA0(appuStack_98,param_1 + 200);
    fn_827DEB38(appuStack_98);
    cVar4 = fn_827DEB60(appuStack_98);
    if (cVar4 == '\0') {
      do {
        fn_827DEAA8(appuStack_98);
        uVar1 = fn_827D96A0();
        uStack_a0 = (undefined4)uVar1;
        fn_8259BB38(&iStack_9c,param_1 + 0x140,&uStack_a0);
        if (iStack_9c != *(int *)(param_1 + 0x144)) {
          lVar5 = (ulonglong)*(uint *)(param_1 + 0x17c) + (ulonglong)*(uint *)(iStack_9c + 0xc);
          iVar2 = fn_82F65390(lVar5,0xffffffff821caa94,3);
          if (iVar2 == 0) {
            fn_82F64068(auStack_80,0x10,0xf,0xffffffff821c557c,uVar1);
            iVar2 = fn_82664518(auStack_80,lVar5 + 3);
            if (iVar2 == 0) {
              thunk_FUN_82a2b798();
            }
          }
        }
        fn_827DEA98(appuStack_98);
        cVar4 = fn_827DEB60(appuStack_98);
      } while (cVar4 == '\0');
    }
    fn_82664888();
    appuStack_98[0] = &lbl_821CAABC;
    fn_8256D798(apppuStack_70,1,0);
  }
  return;
}

